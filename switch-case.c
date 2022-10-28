int main() {
  int c;
    scanf("%d\n", &c);
    switch (c) {
        case 1 : 
            printf("%d\n", c);
            break;
        case 2 :
            printf("%d%d\n", c, c);
            break;
        default :
            printf("default");
            break;

    }
}
