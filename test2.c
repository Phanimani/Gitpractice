/*Defining a basic structure*/
struct details
{
    char name[50];
    int id;
    float fees;
};
int main()
{
    struct details d1;
    printf("size of structure is:%d, size of d1:%d\n",sizeof(struct details),sizeof(d1));//we are printing the size of structure details and the size of var d1.
    printf("Enter the name:\n");
    scanf("%s",d1.name);
    printf("Enter the id:\n");
    scanf("%d",&d1.id);
    printf("Enter the fees details:\n");
    scanf("%.2f",&d1.fees);
    
    printf("%s\t %d\t %.2f",d1.name,d1.id,d1.fees);
    return 0;
}
