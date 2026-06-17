
int __cdecl FUN_36200600(int param_1,uint param_2)

{
  return ((-(uint)((param_2 & 0xff00) != 0) & 8) + 8) * (*(int *)(param_1 + 0xc) + 3U >> 2) *
         (*(int *)(param_1 + 8) + 3U >> 2);
}

