int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = (int *) malloc(sizeof(int) * 5);
  if (ptr == NULL) return 1; // Handle malloc failure
  memcpy(ptr, arr, sizeof(int) * 5);
  free(ptr);
  ptr = NULL; // Set ptr to NULL after freeing
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}