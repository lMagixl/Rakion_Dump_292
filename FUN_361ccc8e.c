
uint __thiscall FUN_361ccc8e(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  int iStack_18;
  uint local_8;
  
  iStack_18 = 0;
  local_8 = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    local_8 = 0xe40000;
  }
  else {
    uVar2 = 0x10;
    do {
      cVar1 = *param_1;
      if (cVar1 != '\0') {
        if (cVar1 < 'x') {
          if ((cVar1 == 'w') || (cVar1 == 'a')) {
            iStack_18 = 3;
          }
          else {
            if (cVar1 != 'b') {
              if (cVar1 == 'g') goto LAB_361ccd1a;
              if (cVar1 == 'r') goto LAB_361cccd0;
              goto LAB_361ccce6;
            }
LAB_361ccd16:
            iStack_18 = 2;
          }
        }
        else if (cVar1 == 'x') {
LAB_361cccd0:
          iStack_18 = 0;
        }
        else {
          if (cVar1 != 'y') {
            if (cVar1 == 'z') goto LAB_361ccd16;
            goto LAB_361ccce6;
          }
LAB_361ccd1a:
          iStack_18 = 1;
        }
        param_1 = param_1 + 1;
      }
      local_8 = local_8 | iStack_18 << ((byte)uVar2 & 0x1f);
      uVar2 = uVar2 + 2;
    } while (uVar2 < 0x18);
    if (*param_1 != '\0') {
LAB_361ccce6:
      FUN_361cc398((int)this,s_invalid_swizzle___s__362496c0);
      *(undefined4 *)((int)this + 0x98) = 1;
      local_8 = 0;
    }
  }
  return local_8;
}

