

void HC74Reset() {}

/* 
Takes a callback function and calls back into the referenced function with the data.
*/
void HC74Push(void(*callback)(int), int i, int b) {
    (*callback)(i);
}