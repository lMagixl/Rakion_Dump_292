
uint __thiscall FUN_361ccbe5(void *this,char *param_1)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char *pcStack_10;
  
  pcVar1 = param_1;
  uVar2 = 0;
  if ((param_1 == (char *)0x0) || (cVar3 = *param_1, pcVar4 = param_1, cVar3 == '\0')) {
    uVar2 = 0xf0000;
  }
  else {
    do {
      if (cVar3 < 'x') {
        if ((cVar3 == 'w') || (cVar3 == 'a')) {
          pcStack_10 = (char *)0x3;
          uVar2 = uVar2 | 0x80000;
        }
        else {
          if (cVar3 != 'b') {
            if (cVar3 == 'g') goto LAB_361ccc5c;
            if (cVar3 != 'r') goto LAB_361ccc66;
            goto LAB_361ccc21;
          }
LAB_361ccc52:
          pcStack_10 = (char *)0x2;
          uVar2 = uVar2 | 0x40000;
        }
      }
      else if (cVar3 == 'x') {
LAB_361ccc21:
        pcStack_10 = (char *)0x0;
        uVar2 = uVar2 | 0x10000;
      }
      else {
        if (cVar3 != 'y') {
          if (cVar3 != 'z') goto LAB_361ccc66;
          goto LAB_361ccc52;
        }
LAB_361ccc5c:
        pcStack_10 = (char *)0x1;
        uVar2 = uVar2 | 0x20000;
      }
      if ((pcVar4 != pcVar1) && (pcStack_10 <= param_1)) {
LAB_361ccc66:
        FUN_361cc398((int)this,s_invalid_mask___s__362496ac);
        *(undefined4 *)((int)this + 0x98) = 1;
        return 0;
      }
      cVar3 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
      param_1 = pcStack_10;
    } while (cVar3 != '\0');
  }
  return uVar2;
}

