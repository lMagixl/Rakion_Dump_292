
undefined4 __fastcall FUN_361db487(int param_1)

{
  HGDIOBJ h;
  
  if (*(HDC *)(param_1 + 0x6c) != (HDC)0x0) {
    h = *(HGDIOBJ *)(param_1 + 0xa8);
    if (h != (HGDIOBJ)0x0) {
      SelectObject(*(HDC *)(param_1 + 0x6c),h);
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
  }
  return 0;
}

