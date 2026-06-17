
/* public: void __thiscall CAnimObject::GetAnimInfo(long,class CAnimInfo &)const  */

void __thiscall CAnimObject::GetAnimInfo(CAnimObject *this,long param_1,CAnimInfo *param_2)

{
  CAnimInfo CVar1;
  CAnimInfo *pCVar2;
  int iVar3;
  CAnimInfo *pCVar4;
  
                    /* 0x201a0  1704  ?GetAnimInfo@CAnimObject@@QBEXJAAVCAnimInfo@@@Z */
  if (*(int *)(*(int *)(this + 0x14) + 0x14) <= param_1) {
    param_1 = 0;
  }
  iVar3 = param_1 * 0x2c;
  pCVar2 = (CAnimInfo *)(*(int *)(*(int *)(this + 0x14) + 0x18) + iVar3);
  pCVar4 = param_2;
  do {
    CVar1 = *pCVar2;
    pCVar2 = pCVar2 + 1;
    *pCVar4 = CVar1;
    pCVar4 = pCVar4 + 1;
  } while (CVar1 != (CAnimInfo)0x0);
  *(undefined4 *)(param_2 + 0x20) =
       *(undefined4 *)(*(int *)(*(int *)(this + 0x14) + 0x18) + 0x20 + iVar3);
  *(undefined4 *)(param_2 + 0x24) =
       *(undefined4 *)(*(int *)(*(int *)(this + 0x14) + 0x18) + 0x24 + iVar3);
  return;
}

