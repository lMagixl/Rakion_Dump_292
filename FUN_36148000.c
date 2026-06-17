
void * __thiscall FUN_36148000(void *this,byte *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  
  *(int *)((int)this + 8) = param_4;
  if (param_4 == 0) {
    for (; (int)param_2 <= param_3; param_2 = param_2 + 1) {
      FUN_36147d20(this,param_1,param_2);
    }
  }
  else {
    bVar2 = true;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
    piVar1 = *(int **)(param_1 + 0x90);
    while (piVar5 = piVar1, piVar1 = (int *)*piVar5, piVar1 != (int *)0x0) {
      if ((char)((CLightSource *)piVar5[5])[0x1c] < '\0') {
        uVar3 = CLightSource::GetLightColor((CLightSource *)piVar5[5]);
        piVar5[0xc] = uVar3 & 0xffffff00;
        iVar4 = IsBlack(uVar3 & 0xffffff00);
        if (iVar4 == 0) {
          bVar2 = false;
        }
      }
    }
    if (bVar2) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      return this;
    }
    if ((int)param_2 <= param_3) {
      do {
        FUN_36147f60(this,(int)param_1,param_2);
        param_2 = param_2 + 1;
      } while ((int)param_2 <= param_3);
      return this;
    }
  }
  return this;
}

