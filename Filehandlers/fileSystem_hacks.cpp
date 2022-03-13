#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

unsigned long long int fileSize(const char *filename)
{
  FILE *fh = fopen(filename, "rb");
  fseek(fh, 0, SEEK_END);
  unsigned long long int size = ftell(fh);
  fclose(fh);

  return (size);
}

bool fileExists(const char *fname)
{
  FILE *file;
  if (file = fopen(fname, "r"))
  {
    fclose(file);
    return (true);
  }
  return (false);
}

int main()
{
  printf("%llu Bytes\n", fileSize("Passwords.txt"));
  printf("%llu Bytes\n", fileSize("Notes.docx"));

  if (fileExists("OldData.txt") == true)
    printf("The File exists\n");
  else
    printf("The File doen't exist\n");

  rename("Videos", "English_Videos");
  rename("Songs", "English_Songs");

  remove("OldData.txt");
  remove("Notes.docx");

  if (fileExists("OldData.txt") == true)
    printf("The File exists\n");
  else
    printf("The File doesn't exist\n");

  return 0;
}
