/*
 * Faça um programa que leia um arquivo texto contendo uma lista de compras.
 * Cada linha do arquivo possui nome, quantidade e valor unitário do produto.
 * O programa então exibe o total da compra.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[30];
  int amount;
  float price;
} store;


store* add_product(store* product, int *n){
  printf("How many products do you want to add: ");
  scanf("%d", n);
  
  int nAloc = *n;

  product = (store *) malloc(nAloc * sizeof(store));

  for(int i = 0; i < nAloc; i++){
    setbuf(stdin, NULL);

    printf("\nProduct Name: ");
    printf("%d. ", i);
    fgets(product[i].name, 30, stdin);

    product[i].name[strcspn(product[i].name, "\n")] = 0;

    printf("Amount: ");
    scanf("%d", &product[i].amount);
    
    printf("Unit Price: ");
    scanf("%f", &product[i].price);

  }

  printf("\nDone!\n");
  return product;
}


void remove_product(store* product, int *n){
  setbuf(stdin,  NULL);
  
  int remove;
  int len = *n;
  float priceTotal = 0.0;
  float priceUnitTotal;
  
  do{
    printf("\nWhich product do you want to remove?:\n");
    
    for(int i = 0; i < len; i++){
      if(strcmp(product[i].name, "0") == 0){
        continue;
      } else{
        priceUnitTotal = product[i].price * product[i].amount;
        printf("%d. Product: %s | Amount: %d | Unit Price: %.2f | Total Price: %.2f\n",i, product[i].name, product[i].amount, product[i].price, priceUnitTotal);
      }

      priceTotal += priceUnitTotal;
    }

    printf("\nTotal Price: %.2f\n", priceTotal);
    priceTotal = 0.0;

    printf("\nChoosen 0 to %d (enter -1 to quit): ", len-1);
    scanf("%d", &remove);
     
    if(remove != -1){
      strcpy(product[remove].name, "0");
      product[remove].price = 0;
      product[remove].amount = 0;
      *n -= 1;
  
      for(int i = remove; i < len; i++){
        if(strcmp(product[i].name, "0") == 0 && (i+1) < len){
          char temp[1];
          strcpy(temp, product[i].name);
          strcpy(product[i].name, product[i+1].name);
          strcpy(product[i+1].name, temp);
          
          float tempPrice;
          tempPrice = product[i].price;
          product[i].price = product[i+1].price;
          product[i+1].price = tempPrice;

          int tempAmount;
          tempAmount = product[i].amount;
          product[i].amount = product[i+1].amount;
          product[i+1].amount = tempAmount; 
        }
      }
    }
    
  } while (remove != -1);
}


void display_list(store* product, int len){
  setbuf(stdin, NULL);
  float priceTotal = 0.0;

  printf("\n");
  for(int i = 0; i < len && product[i].price != 0.0; i++){
    float priceUnitTotal = product[i].price * product[i].amount;
    printf("%d. Product: %s | Amount: %d | Unit Price: %.2f | Total Price: %.2f\n", i, product[i].name, product[i].amount, product[i].price, priceUnitTotal);
    priceTotal += priceUnitTotal;
  }

  printf("\nTotal Price: %.2f\n", priceTotal);

  if(product[0].price == 0.0){
    printf("\nThere is no list of product to display.\n");
  }

  printf("\nPress any key to exit..");
  getchar();
}


void save_to_file(FILE* file, store* product, int len){
  setbuf(stdin, NULL);
  float priceTotal = 0.0;

  file = fopen("store.txt", "w"); 

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }

  for(int i = 0; i < len && product[i].price != 0.0; i++){ 
    float priceUnitTotal = product[i].price * product[i].amount;
    fprintf(file, "Product: %s | Amount: %d | Unit Price: %.2f | Total Price: %.2f\n", product[i].name, product[i].amount, product[i].price, priceUnitTotal); 
    priceTotal += priceUnitTotal;
  }
  

  if(priceTotal == 0.0){
    printf("There is no list of product to save.\n");
    exit(EXIT_FAILURE);
  } else{
    fprintf(file, "\nTotal Price: %.2f\n", priceTotal);
  }

  fclose(file);

  printf("\nThe file was saved successfully.\nPree any key to exit..");
  getchar();
}


void load_file(FILE* file, store* product, int len){
  setbuf(stdin, NULL);

  float priceTotal = 0.0;

  file = fopen("store.txt", "r");
  
  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
  
  fseek(file, 1, SEEK_SET);
  for(int i = 0; i < len && len != 0; i++){
    while(fgetc(file) != '\n');
  }

  if(fscanf(file, "\nTotal Price: %f", &priceTotal) == 1){
    printf("\nTotal Price from File: %.2f\n", priceTotal);
  } else {
    perror("error reading file");
  }

  fclose(file);

  printf("\nPress any key to quit..");
  getchar();
}

int main(void)
{
  int n;
  int menu;
  FILE *file;

  store *product;
  
  do {
    printf("--Store Menu--\n");
    printf("1: add product.\n");
    printf("2: remove product.\n");
    printf("3: show product list.\n");
    printf("4: save to file.\n");
    printf("5: total price from file.\n");
    printf("0: close store.\n");
    
    printf("\nChoose between 0 to 5: ");
    scanf("%d", &menu);

    switch (menu) {
      case 1:
        product = add_product(product, &n);
        break;
      case 2:
        remove_product(product, &n);
        break;
      case 3:
        display_list(product, n);
        break;
      case 4:
        save_to_file(file, product, n);
        break;
      case 5:
        load_file(file, product, n);
        break;
      default:
        if(menu > 5){
          printf("There is no opition %d. Enter between 0 to 5!", menu);
        }
    }

    printf("\n");

  } while(menu != 0);
  
  free(product);
  
  return EXIT_SUCCESS;
}
