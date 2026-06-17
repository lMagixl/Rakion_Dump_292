
void __thiscall FUN_360157c0(void *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar1[1] + 0x11) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  *param_1 = (int)puVar1;
  param_1[1] = (int)puVar4;
  return;
}

