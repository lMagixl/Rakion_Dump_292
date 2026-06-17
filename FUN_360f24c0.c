
undefined4 __thiscall
FUN_360f24c0(void *this,undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  undefined3 extraout_var;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  puVar9 = param_1;
  if (param_4 == (int *)0x0) {
    if ((*(int *)((int)this + 0x9c) != 0) && (*(int *)((int)this + 0xd4) == 0)) {
      piVar8 = (int *)((int)this + 0x88);
      param_4 = piVar8;
      iVar5 = FUN_360febf0((int)piVar8);
      bVar4 = FUN_360feaa0(iVar5);
      if ((CONCAT31(extraout_var,bVar4) != 0) &&
         ((iVar7 = FUN_360ff020(piVar8,(int *)&param_1,0), piVar2 = param_2, iVar7 != 0 &&
          (*(int *)(iVar5 + 0xc) <= *param_2)))) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(iVar5 + 0x41c);
          *(undefined2 *)(param_3 + 1) = *(undefined2 *)(iVar5 + 0x420);
          *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)(iVar5 + 0x422);
        }
        *param_2 = 0;
        do {
          puVar6 = FUN_360fec00(piVar8);
          uVar1 = puVar6[1];
          param_1 = (undefined4 *)(puVar6[2] - 0xc);
          FUN_360fea30(puVar6,puVar9,(uint *)&param_1);
          puVar9 = (undefined4 *)((int)puVar9 + (int)param_1);
          *piVar2 = *piVar2 + (int)param_1;
          FUN_360ff0d0(puVar6);
          piVar8 = param_4;
        } while ((uVar1 & 0x100) == 0);
        return 1;
      }
    }
  }
  else {
    piVar8 = (int *)((int)this + 0xc0);
    param_4 = piVar8;
    iVar5 = FUN_360ff020(piVar8,(int *)&param_1,1);
    if ((iVar5 != 0) &&
       (iVar5 = FUN_360f2350((int)this), puVar3 = param_3, piVar2 = param_2, iVar5 <= *param_2)) {
      if (param_3 != (undefined4 *)0x0) {
        iVar5 = FUN_360febf0((int)piVar8);
        *puVar3 = *(undefined4 *)(iVar5 + 0x41c);
        *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(iVar5 + 0x420);
        *(undefined2 *)((int)puVar3 + 6) = *(undefined2 *)(iVar5 + 0x422);
      }
      *piVar2 = 0;
      do {
        puVar6 = FUN_360fec00(piVar8);
        uVar1 = puVar6[1];
        param_1 = (undefined4 *)(puVar6[2] - 0xc);
        FUN_360fea30(puVar6,puVar9,(uint *)&param_1);
        puVar9 = (undefined4 *)((int)puVar9 + (int)param_1);
        *piVar2 = *piVar2 + (int)param_1;
        FUN_360ff0d0(puVar6);
        piVar8 = param_4;
      } while ((uVar1 & 8) == 0);
      return 1;
    }
  }
  return 0;
}

