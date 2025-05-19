# These are the main things to concentrate upon
Format Specifier	Meaning
%[abcd]	Accept only a/b/c/d, stop otherwise
%[^abcd]	Accept anything except a/b/c/d
s after %[	❌ Wrong — don’t add s there
%[^\n]	Accept everything until newline\

- all the strings terminate after white space
- if you want the string to terminate after a new line use:
- scanf("%[^\n]s, char_name)