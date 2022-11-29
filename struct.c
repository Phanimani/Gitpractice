/*Defining a basic structure*/
struct details
{
    char name[50];
    int id;
};
int main()
{
    struct details d1,d2;
    printf("size of structure is:%d, size of d1:%d\n",sizeof(struct details),sizeof(d1));//we are printing the size of structure details and the size of var d1.
    printf("Enter the name:\n");
    scanf("%s",d1.name);
    printf("Enter the id:\n");
    scanf("%d",&d1.id);
    printf("%s\t %d",d1.name,d1.id);
    return 0;
}
