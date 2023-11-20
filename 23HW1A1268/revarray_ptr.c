//To read array and print reverse elements of array
void main() {
  int A[100], n, i, *ptr;
  ptr = A;
  for(i=1;i<=n;i++) {
      scanf("%d", ptr++) ;
  }
  ptr = ptr -1;
  for(i=1;i<=n;i++) {
      printf("%d", *ptr--) ;
  }
}
