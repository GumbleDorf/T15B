

for (ch = getchar(); ch != EOF; ch = getchar()) {
	putchar(ch);
}
/*
for (a;b;c) {
    program
}

directly translates to

a
while(b) {
    program
    c
}
*/

ch = getchar();
while(ch != EOF) {
    putchar(ch);
    ch = getchar();
}