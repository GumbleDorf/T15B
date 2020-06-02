ch = getchar();
if (isdigit(ch))
	type = "digit";
else
	type = "non-digit";

type = isdigit(ch) ? "digit" : "non-digit";
printf("'%c' is a %s\n", ch, type);

/*
(thing) = (condition) ? (this happens if yes) : (otherwise, this if no)
*/