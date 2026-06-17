
undefined4 FUN_3603f2c0(void)

{
  undefined4 *in_EAX;
  FILE *_File;
  
  _File = fopen((char *)*in_EAX,&DAT_362274c8);
  if (_File != (FILE *)0x0) {
    fclose(_File);
    return 1;
  }
  return 0;
}

