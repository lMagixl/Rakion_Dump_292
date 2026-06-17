
/* public: virtual void __thiscall CMovableEntity::OnInitialize(class CEntityEvent const &) */

void __thiscall CMovableEntity::OnInitialize(CMovableEntity *this,CEntityEvent *param_1)

{
  CEntity *pCVar1;
  CEntity *pCVar2;
  
                    /* 0x1ad8e0  2717  ?OnInitialize@CMovableEntity@@UAEXABVCEntityEvent@@@Z */
  CRationalEntity::OnInitialize((CRationalEntity *)this,param_1);
  ClearTemporaryData(this);
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  FUN_3604f120(this + 0x210,0x3f800000);
  *(undefined4 *)(this + 0x1ec) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1f0) = 0x7f61b1e6;
  *(undefined4 *)(this + 500) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1f8) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1fc) = 0xff61b1e6;
  *(undefined4 *)(this + 0x200) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1d4) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1d8) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1dc) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1e0) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1e4) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1e8) = 0xff61b1e6;
  *(undefined4 *)(this + 0x2a8) = 0;
  pCVar2 = *(CEntity **)(this + 0x244);
  if (pCVar2 != (CEntity *)0x0) {
    pCVar1 = pCVar2 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(pCVar2);
    }
  }
  *(undefined4 *)(this + 0x244) = 0;
  pCVar2 = *(CEntity **)(this + 0x248);
  if (pCVar2 != (CEntity *)0x0) {
    pCVar1 = pCVar2 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(pCVar2);
    }
  }
  *(undefined4 *)(this + 0x248) = 0;
  FUN_36103080((void *)(*(int *)(this + 0xa8) + 0x68),(int)this);
  return;
}

