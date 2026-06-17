
/* public: void __thiscall CWorld::SelectByTextureInWorld(class CTFileName,class CSelection<class
   CBrushPolygon,256> &,long) */

void __thiscall
CWorld::SelectByTextureInWorld
          (CWorld *this,char *param_2,undefined4 param_3,void *param_4,int param_5)

{
  int *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc9b10  3220
                       ?SelectByTextureInWorld@CWorld@@QAEXVCTFileName@@AAV?$CSelection@VCBrushPolygon@@$0BAA@@@J@Z
                        */
  puStack_8 = &LAB_36214590;
  local_c = ExceptionList;
  this = this + 0x15c;
  local_4 = 0;
  local_1c = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_360caf20((int)this);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_360cafb0(this,local_1c);
      if (*(int *)(iVar2 + 4) == 4) {
        iVar2 = FUN_360cafb0(this,local_1c);
        for (piVar6 = *(int **)(*(int *)(iVar2 + 0x7c) + 0x674); *piVar6 != 0;
            piVar6 = (int *)*piVar6) {
          this_00 = piVar6 + -6;
          iVar4 = 0;
          iVar2 = FUN_36043600((int)this_00);
          if (0 < iVar2) {
            do {
              iVar2 = FUN_36043710(this_00,iVar4);
              iVar5 = 0;
              local_4 = CONCAT31(local_4._1_3_,3);
              if (0 < *(int *)(iVar2 + 0x18)) {
                do {
                  iVar3 = *(int *)(iVar2 + 0x1c) + iVar5 * 0x1d0;
                  uVar1 = *(uint *)(iVar3 + 200);
                  if (((((uVar1 & 0x400000) == 0) || ((uVar1 & 0x8020) != 0)) &&
                      ((uVar1 & 0x100) == 0)) &&
                     ((iVar3 = *(int *)(param_5 * 0x38 + 0x30 + iVar3), iVar3 != 0 &&
                      (iVar3 = CTString::operator==((CTString *)(iVar3 + 0xc),(CTString *)&param_2),
                      iVar3 != 0)))) {
                    FUN_360ccda0(param_4,*(int *)(iVar2 + 0x1c) + iVar5 * 0x1d0);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(iVar2 + 0x18));
              }
              iVar4 = iVar4 + 1;
              iVar2 = FUN_36043600((int)this_00);
            } while (iVar4 < iVar2);
          }
        }
      }
      local_1c = local_1c + 1;
      iVar2 = FUN_360caf20((int)this);
    } while (local_1c < iVar2);
  }
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

