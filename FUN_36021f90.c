
void __fastcall FUN_36021f90(int param_1)

{
  if (param_1 != 0) {
    if (*(FILE **)(param_1 + 0x28) != (FILE *)0x0) {
      fclose(*(FILE **)(param_1 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

