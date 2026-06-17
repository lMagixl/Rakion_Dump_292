
/* public: bool __thiscall Xenesis::xFileManager::optimize(unsigned int) */

bool __thiscall Xenesis::xFileManager::optimize(xFileManager *this,uint param_1)

{
  xFolder *pxVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  __uint64 _Var9;
  __uint64 _Var10;
  longlong lVar11;
  undefined8 uVar12;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a53c0  4261  ?optimize@xFileManager@Xenesis@@QAE_NI@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b93a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _Var9 = getRealSize(this);
  if (_Var9 != 0) {
    _Var10 = getCompSize(this);
    lVar11 = __allmul((uint)(_Var9 - _Var10),(int)(_Var9 - _Var10 >> 0x20),100,0);
    uVar12 = __aulldiv((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),(uint)_Var9,
                       (uint)(_Var9 >> 0x20));
    if (((int)((ulonglong)uVar12 >> 0x20) != 0) || (param_1 <= (uint)uVar12)) {
      uVar4 = 6;
      this[0x10ee] = (xFileManager)0x1;
      local_18 = 0;
      FUN_361a4b10(&param_1,0x20000);
      local_4 = 0;
      pxVar1 = getNearstFile(this,6);
      do {
        if (pxVar1 == (xFolder *)0x0) {
          *(uint *)(this + 0x10) = uVar4;
          *(int *)(this + 0x14) = local_18;
          local_4 = 0xffffffff;
          FUN_36018d70(&param_1);
          ExceptionList = local_c;
          return true;
        }
        uVar7 = *(uint *)(pxVar1 + 0x18);
        iVar3 = *(int *)(pxVar1 + 0x1c);
        if ((uVar7 == uVar4) && (iVar3 == local_18)) {
          uVar7 = *(uint *)(pxVar1 + 0x24);
        }
        else {
          iVar2 = local_18;
          uVar5 = uVar4;
          for (uVar6 = *(uint *)(pxVar1 + 0x24); 0x20000 < uVar6; uVar6 = uVar6 - 0x20000) {
            bVar8 = moving(this,(xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *)(this + 0x40),
                           (void *)param_1,CONCAT44(iVar3,uVar7),CONCAT44(iVar2,uVar5),0x20000);
            if (!bVar8) goto LAB_361a5597;
            bVar8 = 0xfffdffff < uVar7;
            uVar7 = uVar7 + 0x20000;
            iVar3 = iVar3 + (uint)bVar8;
            bVar8 = 0xfffdffff < uVar5;
            uVar5 = uVar5 + 0x20000;
            iVar2 = iVar2 + (uint)bVar8;
          }
          bVar8 = moving(this,(xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *)(this + 0x40),
                         (void *)param_1,CONCAT44(iVar3,uVar7),CONCAT44(iVar2,uVar5),uVar6);
          if (!bVar8) {
LAB_361a5597:
            local_4 = 0xffffffff;
            FUN_36018d70(&param_1);
            ExceptionList = local_c;
            return false;
          }
          *(uint *)(pxVar1 + 0x18) = uVar4;
          *(int *)(pxVar1 + 0x1c) = local_18;
          uVar7 = *(uint *)(pxVar1 + 0x24);
        }
        bVar8 = CARRY4(uVar4,uVar7);
        uVar4 = uVar4 + uVar7;
        local_18 = local_18 + (uint)bVar8;
        pxVar1 = getNearstFile(this,CONCAT44(local_18,uVar4));
      } while( true );
    }
  }
  ExceptionList = local_c;
  return true;
}

