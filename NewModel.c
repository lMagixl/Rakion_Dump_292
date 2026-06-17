
/* private: void __thiscall CEditModel::NewModel(class CObject3D *) */

void __thiscall CEditModel::NewModel(CEditModel *this,CObject3D *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  void *this_00;
  double *pdVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  
                    /* 0xacca0  2672  ?NewModel@CEditModel@@AAEXPAVCObject3D@@@Z */
  FUN_3604a790(param_1,0);
  FUN_360502d0();
  iVar3 = FUN_3604a790(param_1,0);
  iVar3 = FUN_3604aa70(iVar3);
  *(int *)(this + 0x34) = iVar3;
  FUN_360b1a40(this + 0x5c,iVar3);
  FUN_3604f220(this + 0x54,*(int *)(this + 0x34));
  iVar3 = *(int *)(this + 0x34);
  if (iVar3 != 0) {
    *(int *)(this + 100) = iVar3;
    uVar4 = thunk_FUN_361bf99c(iVar3 * 4 + 4);
    *(undefined4 *)(this + 0x68) = uVar4;
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x34)) {
    iVar7 = 0;
    do {
      iVar8 = iVar3;
      this_00 = (void *)FUN_3604a790(param_1,0);
      pdVar5 = (double *)FUN_3604a710(this_00,iVar8);
      dVar1 = pdVar5[1];
      pfVar6 = (float *)(*(int *)(this + 0x58) + iVar7);
      dVar2 = pdVar5[2];
      *pfVar6 = (float)*pdVar5;
      pfVar6[1] = (float)dVar1;
      pfVar6[2] = (float)dVar2;
      *(undefined4 *)(*(int *)(this + 0x68) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar3 < *(int *)(this + 0x34));
  }
  AddMipModel(this,param_1);
  FUN_3604a790(param_1,0);
  FUN_360502e0();
  return;
}

