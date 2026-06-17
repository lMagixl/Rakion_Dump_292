
undefined4 * __thiscall FUN_360ccc00(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_360cc6c0(this);
  iVar1 = FUN_360cb6c0((int)param_1);
  if (iVar1 != 0) {
    piVar2 = FUN_360cc9d0(this,iVar1);
    iVar4 = 0;
    if (0 < iVar1) {
      piVar2 = piVar2 + 1;
      do {
        iVar3 = FUN_360cb850(param_1,iVar4);
        *piVar2 = 0;
        piVar2[1] = 0;
        CAnyProjection3D::operator=
                  ((CAnyProjection3D *)(piVar2 + 2),(CAnyProjection3D *)(iVar3 + 0xc));
        piVar2[0x199] = *(int *)(iVar3 + 0x668);
        piVar2[0x19a] = *(int *)(iVar3 + 0x66c);
        piVar2[0x19b] = *(int *)(iVar3 + 0x670);
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 0x1a0;
      } while (iVar4 < iVar1);
    }
  }
  return this;
}

