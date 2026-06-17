
void __thiscall FUN_36019250(void *this,uint param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *local_8;
  int *local_4;
  
  uVar6 = *(uint *)((int)this + 0x30) ^ param_1;
  iVar1 = uVar6 + param_2;
  if ((int)uVar6 < iVar1) {
    do {
      param_1 = uVar6;
      FUN_360157c0((void *)((int)this + 0x14),(int *)&local_8,&param_1);
      piVar4 = local_8;
      while (piVar4 != local_4) {
        if (*(char *)((int)piVar4 + 0x11) == '\0') {
          piVar3 = (int *)piVar4[2];
          if (*(char *)((int)piVar3 + 0x11) == '\0') {
            cVar2 = *(char *)(*piVar3 + 0x11);
            piVar4 = piVar3;
            piVar3 = (int *)*piVar3;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar3 + 0x11);
              piVar4 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar2 = *(char *)(piVar4[1] + 0x11);
            piVar5 = (int *)piVar4[1];
            piVar3 = piVar4;
            while ((piVar4 = piVar5, cVar2 == '\0' && (piVar3 == (int *)piVar4[2]))) {
              cVar2 = *(char *)(piVar4[1] + 0x11);
              piVar5 = (int *)piVar4[1];
              piVar3 = piVar4;
            }
          }
        }
      }
      FUN_36016ea0((void *)((int)this + 0x14),&param_1,local_8,local_4);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar1);
  }
  return;
}

