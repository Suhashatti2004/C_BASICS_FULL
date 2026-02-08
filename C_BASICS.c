#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

//for matirx
#define N 50

//for Macro
#define MAX(a,b) if (a>b) {printf("%d is greater than %d\n",a,b);} else {printf("%d is greater than %d\n",b,a);}

#define MAX2(a,b) (a>b)? a:b

#define MULL(a,b) a*b
//for static storage class
static char choo='A';
void dispaly();

//1. Pass a pointer to store the result (recommended for simple cases)
void add1(int *a, int *b, int *result) {
    *result = *a + *b;
    printf("address of result in function: %d\n",result);
}

//2. Use dynamic memory (less preferred unless really needed):
int* add2(int *a, int *b) {
    int *c = malloc(sizeof(int));
    *c = *a + *b;
    printf("address of c in function: %d\n", c);
    return c;
}
// Note: Remember to free the allocated memory after use
void free_result(int *result) {
    free(result);
}

//3.Function pointer
int Add(int a, int b)
{
    return a+b;
}

//4.Function Pointers 
void PrintHello(char *name)
{
printf("Hello %s\n", name);
}

//5. Function pointer as pointer and callback function
int compare(int a,int b)
{
    if(a > b) return -1;
    else return 1;
}
void BubbleSort (int *A, int n){//int (*compare) (int, int)) {
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++) {
            if(compare (A[j],A[j+1]) > 0) { //compare A[j] with A[j+1] and SWAP if needed temp = A[j];
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int findkey(int *arr, int n, int k) {
    for(int i=0;i<n;i++){
    int mid=n/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        int end=mid-1;
    }
    else if (arr[mid]<k){
        int start=mid+1;
    }
    else{
        return -1; // Key not found
    }
    
  }
}
// Bubble sort function
// This function sorts an array in ascending or descending order based on the boolean flag 's'
int sort(int *arr,int n,bool s){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(s){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
                
            }
            else{
                if(arr[j]<arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }

        }
    }

}

int xz;
//6) toggel the number problem this function to print function is to print before and after of bit changes
void numtobin(int n){
    int rem,bin=0,pow=1;
    while(n>0){
        rem=n%2;
        bin=bin+rem*pow;
        pow=pow*10;
        n=n/2;
    }
    printf("Binary:%d\n",bin);
}

int main() {
    //////////////////multiplication of 2 matrix/////////////////////
    /*
    int a[N][N],b[N][N],c[N][N],sum=0,m,n,p,q;
    printf("Enter rows and column of the first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("enter the first matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter rows and column of the second matrix:\n");
    scanf("%d %d",&p,&q);
    printf("enter the second matrix:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("entered first matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("entered second matrix:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p){
        printf("Cannot multiply");
    }
    else{
        for(int i=0;i<m;i++){//row of 1st matrix 
        for(int j=0;j<q;j++){///column of 2nd matrix
        sum=0;
        for(int k=0;k<n;k++){// traverse through columns of 1st matrix and trverse through row of 2nd matrix
        sum =sum+a[i][k] * b[k][j];///is done by k
        }
        c[i][j]=sum;
      }
     }
    }
    printf("\n");
    printf("multipilied result matrix:\n");
     for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    */
    
    ////////////////[string concatenation => append] /////////////////////////////
   
    //with strcat 
    /*
    char str1[19]="Jenny";
    char str2[7]="khatri";
    strcat(str1,str2);
    printf("%s",str1);
    */

    //without strcat joining/merging 2 string()
    /*
    char str1[19]="Jenny";
    char str2[7]="khatri";
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len2;i++){
        str1[len1+i]=str2[i];
    }
    puts(str1);
    */

    /*
    //check for above values
    printf("Before characters stored in str2:\n");
    for(int j=0;j<len2;j++){
        printf("%d\t %c",j,str2[j]);
        
        printf("\n");
    }
    str1[6]="Jenny";
    printf("Before characters stored in str1:\n");
    for(int j=0;j<len1;j++){
        printf("%d\t %c",j,str1[j]);
        printf("\n");
    }
    */
    
    //////////////////string compare////////////////////////////////

    //with strcmp
    /*
    char str1[20];
    char str2[20];
    printf("enter the string1:");
    gets(str1);
    printf("enter the string2:");
    gets(str2);
    if(strcmp(str1,str2)==0){
        printf("same");
    }
    else{
        printf("not same");
    }
    */

    //without strcmp
    /*
    char str1[20];
    char str2[20];
    int flag=0;
    printf("enter the string1:");
    gets(str1);
    printf("enter the string2:");
    gets(str2);
    for(int i=0;str1[i] !='\0'|| str2[i] !='\0';i++){
         
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("same");
    }
    else{
        printf("not same");
    }
    */

    ////////////////////////Reverse a string//////////////////////////////////

    //with strrev
    /*
    char s1[20];
    printf("enter the string1:");
    gets(s1);
    strrev(s1);
    printf("%s",s1);
    */
    
    //without strrev
    /*
    char s1[20];
    printf("enter the string1:");
    gets(s1);
    int st=0;int end=strlen(s1)-1;
    while(st<end){
        //no swap keypword in C  =>swap(s1[st],s1[end]);
        char temp=s1[st];
        s1[st]=s1[end];
        s1[end]=temp;
        st++;
        end--;
    }
    printf("%s",s1);
    */
    
    ////////////////string to upper and lower case///////////////////////
    //with in built function
    /*
    char s1[20];
    printf("enter the string1:");
    gets(s1);
    //strlwr(s1);//to lower
    strupr(s1);//to upper
    printf("%s",s1);
    */
    
    //without in built functions
    /*
    char s1[20];
    printf("enter the string1:");
    gets(s1);
    //for(int i=0;s1[i]>='A' && s1[i]<='Z';i++){//to lower
        for(int i=0;s1[i]>='a' && s1[i]<='z';i++){
       // s1[i]=s1[i]+32;//lower 
        s1[i]=s1[i]-32;//upper
    }
    printf("%s",s1);
    */
   ///////////////////////////////////Bit - manipulation////////////////////////////////
    //1)to find number of set bits in a given decimal number and in binary representation normal method
    /*
    int n;int rem=0,c=0,pow=1,binary=0;
    printf("enter decimal:\n");
    scanf("%d",&n);
    while(n>0){
        rem=n%2;
        if(rem==1){
            c++;
        } 
        //To print in binary
        binary=binary+rem*pow;
        pow=pow*10;
        n=n/2;
    }
    printf("No.of set bits:%d\n",c);
    printf("the binary is:%d\n",binary);
    */
    
    //count number of set bits array method
    /*
    int n;
    printf("enter decimal:\n");
    scanf("%d",&n);
    int a[5];int i=0;int c=0;
    while(n>0){
        a[i]=n%2; 
        if(a[i]==1){
            c++;
        }
        n=n/2;
        i++;
    }
    
    printf("Number of set bits:%d \n",c);
    printf("In binary:\n");
    for(int i=5;i>=0;i--){/////////////don't use this method to find binary prints garbage 
    printf(" %d",a[i]);
    }
    printf("\n");
    */

    ////2)BIT-WISE METHOD TO FIND THE SET BITS WHEN A INTEGER number IS GIVEN AS INPUT
    /*
    int n,count=0,temp,set;
    printf("enter the number to find the number of set bits using bitwise method:\n");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        set=temp&1;
        if(set==1){ 
            count++;
        }
        temp=temp>>1;
        printf("%d\n",temp);
    }
    printf("No.of set bits:%d\n",count);
    */

    //3)For a integer number given find the kth bit if it is set or not
    /*
    int n,k;
    printf("enter the integer and kth bit to find wheteher bit is set:\n");
    scanf("%d %d",&n,&k);
    if((n & (1<<k))==0){//x=y condition true 
        printf("bit is not set\n");
    }
    else{
        printf("bit is set\n");
    }
    
    //printf("%d",((n & (1<<k))==0));//prints 1 if condition is true and prints 0 if condiion is false
    */
    

    //4)Check whether the given number is even or odd
    /*
    int n;
    printf("enter the number to find the number even or odd using bitwise method:\n");
    scanf("%d",&n);
    if((n&1)==0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    */
    
    //5)check if the machine is little endian or big endian
    /*
    //int a=1;
    int a=0x46237586;
    char *p=(char*)&a;
    if(*p==86){
        printf("CPU is BigEndian\n");
    }
    else{
        printf("CPU is LittleEndian");
    }
    */

    //print "Hello world " without using semicolon
    /*
    //using if
    if(printf("Hello world\n")){
        
    }
    //using while
    while(printf("Hello world\n")){
        break;
    }
    //switch
    switch(printf("Hello world\n")){
    
    }
    */
    
    //6)Give a number toggle its particular bit (kth bit) and print the output

    /*
    int a,k,x;
    printf("enter the number and the kth and xth bit will be toggled:\n");
    scanf("%d %d %d",&a,&k,&x);
    numtobin(a);
    a=a^(1<<k)^(1<<x);
    printf("toggled %d\n",a);
    numtobin(a);
    */
    
    //7)Give a number to clear its particular bit (kth bit) and print the output
    /*
    int a,k;
    printf("enter the number and the kth bit will be cleared:\n");
    scanf("%d %d",&a,&k);
    numtobin(a);
    a=a&~(1<<k);
    printf("cleared: %d\n",a);
    numtobin(a);
    */

    //8)Give a number to set its particular bit (kth bit) and print the output
    /*
    int a,k;
    printf("enter the number and the kth bit will be set:\n");
    scanf("%d %d",&a,&k);
    numtobin(a);
    a=a|(1<<k);
    printf("Set: %d\n",a);
    numtobin(a);
    */
    

    ////////////////////////////////////////////pointer////////////////////////////////

    //1n. Use pointers to store the result
    
    /*
    int x = 5, y = 7, res;
    add1(&x, &y, &res);
    printf("%d\n", res);  // Output: 12
    printf("address of result in main: %d\n",&res);
    */

   //2. Use dynamic memory (less preferred unless really needed):
   /*
   int x = 5, y = 7;
   int *res = add2(&x, &y);
   printf("%d\n", *res);  // Output: 12
   printf("address of result in main: %d\n", res);
   
   // Free the dynamically allocated memory
   free_result(res);
   */

   //3.Function pointer
   /*
   int c;
   int (*p) (int, int);
   p = Add; // function name will return us pointer |
   c = (*p)(2,3);//or p(2,3) //de-referencing and executing the function.
   printf("%d\n",c);    
   */


    //4. Function pointer example 
    /*
    void (*ptr) (char*);
    ptr=PrintHello;
    ptr("Tom");
    */

    //5. Function pointer as pointer and callback function
    /*
    int i, A[] =  {-1,4,-6,22,-31,50};
    //{-31,22,-1,50,-6,4}; // =>
    BubbleSort (A,6);// compare);
    for(i=0;i<6;i++){
        printf("%d ",A[i]);
    }
    */

    //for interview any array taking input at run time
    /*
    int n=0;bool s=0;
    printf("Enter 1 for ascending order or 0 for descending order: ");
    scanf("%b",&s);
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int *arr =(int *)calloc(n,sizeof(int));
    printf("Enter element:");
    for(int i=0;i<n;i++){ 
        scanf("%d\n",&arr[i]);
    }
    sort(arr, n, s );
    findkey(arr, n, s );
    */

    ///NULL POINTER
    /*
    int *ptr_null = NULL;
    printf("Address of null pointer: %p\n",ptr_null);
    //printf("value of null pointer: %p\n",*ptr_null);
    //printf("Hello, World!\n");//this part is not printed because dereferencing a null pointer will cause a segmentation fault. To avoid this, we should always check if the pointer is NULL before dereferencing it.
    
    if(ptr_null == NULL) {//ptr1==ptr2 => when it both are NULL can use condition to do some operation
    printf("Pointer is NULL, cannot dereference.\n");
    } else {
    printf("Value at pointer: %d\n", *ptr_null);
    }

*/

//////////////////////////////structure/////////////////////////////////////
    struct Student {
        int roll_no;
        char name[50];
        float marks;
    }s10={1,"jenny",90};//s1,s2,s3;

    //structure variable initialization 
    /*
    struct lol {
        int roll_no;
        char name[50];
        float marks;
    } s1;//s1 variable is used directly without writing "struct lol s1" in main function
    
    printf("Size of Student structure: %zu bytes\n", sizeof(struct Student));
    //struct Student s1;
    printf("Size of Student structure variable: %zu bytes\n", sizeof(s1));
    s1.roll_no = 101;
    strcpy(s1.name, "John Doe");
    s1.marks = 85.5;
    
    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);//.2f =>after decimal point 2 digits printed
    */
 
    /*
    printf("Size of Student structure: %zu bytes\n", sizeof(struct Student));
    struct Student s1;
    printf("Size of Student structure variable: %zu bytes\n", sizeof(s1));
    s1.roll_no = 101;
    strcpy(s1.name, "John Doe");
    s1.marks = 85.5;
    
    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);//.2f =>after decimal point 2 digits printed
    
    
    struct Student s2= {102, "Jane Smith", 92.0};
    printf("Information for s2=>");
    printf("\n %d %s %.2f", s2.roll_no,s2.name,s2.marks);
    printf("\nInformation for s1=>");
    printf("\n %d %s %.2f", s1.roll_no,s1.name,s1.marks);
    
    if(s1.roll_no>s2.roll_no){
        printf("\n%s has a higher roll number than %s", s1.name,s2.name);
    }
    else{
        printf("\n%s has a higher roll number than %s",s2.name,s1.name);
    }
    struct Student s3;
    printf("\nEnter Information for s3=>");
    printf("\nEnter roll number, name and marks (separated by spaces): ");
    scanf("%d %s %f", &s3.roll_no, s3.name, &s3.marks);
    printf("\nInformation for s3=>");
    printf("\n %d %s %.2f", s3.roll_no,s3.name,s3.marks);
   */

  //also can use scanf with \n to take input
  //but it will not work with spaces in string
    /*
    scanf("%d\n",&s3.roll_no);
    scanf("%s\n",&s3.name);
    scanf("%f\n",&s3.marks);
    */

    //structure using array form of variables
     /*
    struct Student s[3];
    for(int i=0;i<3;i++){
        printf("Enter roll number,name and marks for student (separated by spaces)%d:",i+1);
        scanf("%d %s %f", &s[i].roll_no, s[i].name,&s[i].marks);
    }
    printf("\nInformation for students:\n");
    for(int i=0;i<3;i++){
        printf("Student %d: Roll No: %d, Name: %s, Marks: %.2f\n", i+1, s[i].roll_no, s[i].name, s[i].marks);
    }
    */

    //pointer to structure
    /*
    struct Student *ptr=&s10;
    printf("Enter roll number, name and marks for student 10:\n ");
    scanf("%d %s %f",&ptr->roll_no,&ptr->name,&ptr->marks);
    printf("\nInformation for student 10:\n");
    printf("Roll No:%d, Name: %s, Marks: %.2f\n",ptr->roll_no,ptr->name,ptr->marks);
    //printf("Roll No:%d, Name: %s, Marks: %.2f\n",(*ptr).roll_no,(*ptr).name,(*ptr).marks);
    */

    //////////////////////////////union //'/////////////////
    /*
    union abc {
        int a;
        char b;
        float c;
    };
    union abc u1;
    union abc *ptr=&u1;
    u1.a = 10;
    u1.b= 97;
    u1.c=20.6;
    //printf("a is: %d,c is:%s, b is: %2.f\n",ptr->a,ptr->b,ptr->c);
    printf("\na: %d", ptr->a);
    printf("\nb: %c", ptr->b);
    printf("\nc: %.2f", ptr->c);
    */

    //Type Defining of structure
    /*
    typedef struct student_for_type_def {
        int roll_no;
        char name[50];
        float marks;
    }stu;
    //stu s1,s2,s3;
    stu s1= {101, "John Doe", 85.5};
    printf("%d %s %.2f\n", s1.roll_no, s1.name, s1.marks);
    */
    
    /////////////////////////Structure Padding////////////////////////////////
    /*
    struct abc{
        char a; //1 byte
        int b;  //4 bytes
        //double c; //8 bytes
    }s;
    printf("Size of structure abc: %zu bytes\n", sizeof(s));// 8 bytes due to padding
    
    ///////////////////////////structure packing///////////////////////////////
    #pragma pack(1)
    struct abc2{ 
        char a; //1 byte
        int b;  //4 bytes
        //double c; //8 bytes
    }s1;
    printf("Size of structure abc: %zu bytes\n", sizeof(s1));// 5 bytes
    */
    
    ////////////////////////////ENUMERATION/////////////////////////////////////
    /*
    enum weekdays{ mon,tue,wed,thus,fri,sat,sun};
    enum weekdays today;
    printf("size of enum: %d\n",sizeof(today));
    enum weekdays today1=mon;
    printf("today1 is: %d\n",today1);
    */

    /*
    enum xenon { c,cpp,java};
    enum yenon {xenon};
    enum yenon var;
    printf("size of var:%d", sizeof(var));
    printf("size of enum: %d\n",sizeof(xenon));
    */
   

    ////////////////////////////ALL ABOUT FILES/////////////////////////////////
    
    /////opening a file in write mode
    /*
    FILE *fp=NULL;
    char str[100];int a=1;
    printf("Enter the string:");
    gets(str);
    fp=fopen("abc.txt","w");
    if(fp==NULL){
        printf("Error file not opened\n");
        exit(1);
    }
    fputs("Hello welcome to my first file\n",fp);
    for(int i=0;i<strlen(str);i++){
        fputc(str[i],fp);
    }
    fprintf(fp,"\n %d Thank you for visiting my file \n",a);
    fputs(str,fp);
    fclose(fp);
    */

    /////reading from a file
    /*
    FILE *fp=NULL;
    char ch; char str[45];
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("error there is no file");
        exit(1);
    }
    
    
    //if used this then it down function won't work with this together 
    //printf("for all charater:\n");
    //while(!feof(fp)){//stops after reading 1 char so used loops 
    //ch=fgetc(fp);
    
    //printf("%c",ch);
    //}
    //printf("\n");
   
   
   printf("for all string:\n");
   //using string
   while(!feof(fp)){//stops after new line char so used loops
   fgets(str,8,fp);
   
   printf("%s",str);
   }
   printf("\n");
   
   fgets(str,8,fp);
   printf("for 8 char:\n");//if used only this after new line char won't work
   printf("%s",str);
   
   fclose(fp); 
   */
    
    ////appending in the file
    /*
    FILE *fp=NULL;
    char str[50];
    fp=fopen("abc.txt","a");
    printf("Enter the string to append:");
    gets(str);
    if(fp==NULL){
        printf("Error file not opened\n");
        exit(1);
    }
    fprintf(fp,"\n %s",str);
    fputs("\n",fp);
    fputs(str,fp);
    printf("successfully appended the string to the file\n");
    fclose(fp);     
    */

    ////r+ mode in the file
    /*
    FILE *fp=NULL;
    char str[50];
    fp=fopen("abc.txt","r+");
    printf("Enter the string to overwrite:");
    gets(str);
    if(fp==NULL){//if there was no file then this will happen
    printf("Error file not opened\n");
    exit(1);
    }
    fprintf(fp,"\n %s",str);
    fputs("\n",fp);
    // below code does not work
    //fgets(str,50,fp);
    //printf("5 char:%s\n",str);//if used only this after new line char won't work
    fclose(fp);
    */
    
    /////w+ mode in the file
    /*
    FILE *fp=NULL;
    char ch;
    char str[50];
    fp=fopen("abc.txt","w+");
    if(fp==NULL){//if there was no file then this will happen
        printf("Error file not opened\n");
        exit(1);
    }
    fputs("khatri",fp);
    rewind(fp); // Move the file pointer to the beginning of the filec
    while(!feof(fp)){//stops after new line char so used loops
        ch=fgetc(fp);
        printf("%c",ch);
    }
    //fputs("jenny",fp);
    fclose(fp);
    */ 

    /////a+ mode in the file
    /*
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc.txt","a+");//'a' => only append not reading
    fputs("you cover everything",fp);
    if(fp==NULL){
        printf("Error file not opened\n");
        exit(1);
    }
    rewind(fp); // Move the file pointer to the beginning of the filec
    while(!feof(fp)){//stops after new line char so used loops
    ch=fgetc(fp);
    printf("%c",ch);
    }
    fputs("jenny",fp);
    //printf("successfully appended the string to the file\n");
    fclose(fp);    
    */

    /////FSEEK to move to a specific position in the file
    /*
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc.txt","r+");
    if(fp==NULL){//if there was no file then this will happen
    printf("Error file not opened\n");
    exit(1);
}
    fseek(fp,6,SEEK_SET);
    ch=fgetc(fp);
    printf("Character at position 6: %c\n", ch);
    fseek(fp,-3,SEEK_CUR);
    ch=fgetc(fp);
    printf("Character at position 5: %c\n", ch);
    fseek(fp,-4,SEEK_END);
    ch=fgetc(fp);
    printf("Character at position end to back: %c\n", ch);
    fseek(fp,6,SEEK_SET);
    fputs ("oo",fp);
    */
    
    //////ftell to get the current position in the file
    /*
    FILE *fp=NULL;
    char ch;int pos; char str[20];           
    fp=fopen("abc.txt","r+");
    if(fp==NULL){//if there was no file then this will happen
    printf("Error file not opened\n");
    exit(1);
    }
    ftell(fp); // Get the current position in the file
    printf("Current position in the file: %ld\n", ftell(fp));
    fseek(fp,6,SEEK_SET);
     ch=fgetc(fp);
    
    ftell(fp); // Get the current position in the file
    printf("Current position in the file: %ld\n", ftell(fp));

    printf("Character at position 6: %c\n", ch);
    fseek(fp,-3,SEEK_CUR);
    ch=fgetc(fp);
    printf("Character at position 5: %c\n", ch);
    fseek(fp,-4,SEEK_END);
    ch=fgetc(fp);
    printf("Character at position end to back: %c\n", ch);
    fseek(fp,6,SEEK_SET);
    fputs ("oo",fp);
    printf("curser 6: %d \n",ftell(fp));
    fscanf(fp,"%s",str);
    printf("String read from file: %s\n", str);
    pos = ftell(fp);
    printf("Current position in the file after reading: %d\n", pos);
    
    //lenght of the file
    fseek(fp,0,SEEK_END);
    printf("%d",ftell(fp));
    fclose(fp);
    */
    
    /////printing number of lines and number of characters in the file
    /*
    FILE *fp=NULL;
    char ch; int count=1, no_of_char=0; 
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("error there is no file");
        exit(1);
    }
    
    while((ch = fgetc(fp)) != EOF){//stops after new line char so used loops
    if(ch=='\n'){
        count+=1;
    }
    no_of_char++;
    }
    printf("Number of lines in the file:%d\n",count);
    printf("Number of characters in the file:%d\n",no_of_char);
    fclose(fp);
    */
    
     //////copy content from one file to another
     /*
     FILE *fptr1=NULL, *fptr2=NULL;
     char ch;  
     fptr1=fopen("abc.txt","r");
     if(fptr1==NULL){ 
        printf("error there is no file");
        exit(1);
    }
    fptr2=fopen("destination.txt","w");
    if(fptr2==NULL){
        printf("error");
        exit(1);
    }
    while((ch = fgetc(fptr1)) != EOF){//stops after new line char so used loops
    fputc(ch,fptr2);
    }
    printf("Successfully copied the content from one to new file\n");

    fclose(fptr1);
    fclose(fptr2);
    */

    ////////////storage class in c/////////////////////////////////////
    //covers all theory and question asked in interview:
    ///https://www.scholarhat.com/tutorial/c/storage-class-in-c#:~:text=garbage%20garbage%20garbage-,Static%20Storage%20Class%20in%20C,conflicts%2C%20also%20improves%20code%20clarity.
    /*
    dispaly();
    dispaly();
    printf("%C\n", choo);
    printf("%d\n", xz);
    */

    //External storage class
    // in extern_samefile.c file for using extern in same file
    // in extern1.c file and support.c for using extern between files

    // Macro on the notes book
    /*
    MAX(5, 10);
    printf("the maximmun is:%d",MAX2(1, 10));
    printf("\nThe multiplication is:%d",MULL(5, 10));
    printf("\nThe multiplication is:%d",MULL(5-2, 7+4));
    */
    
    //pre-defined macros
    /*
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    
    */
    

    return 0;

} 

void dispaly() {
    static int a=10;
    int without_static=10;
    a+=10;
    without_static--;
    printf("Value of without_static: %d\n", without_static);
    printf("Value of a with static: %d\n", a);

}