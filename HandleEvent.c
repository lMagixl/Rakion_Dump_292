
/* public: virtual int __thiscall CRationalEntity::HandleEvent(class CEntityEvent const &) */

int __thiscall CRationalEntity::HandleEvent(CRationalEntity *this,CEntityEvent *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
                    /* 0x1297b0  2236  ?HandleEvent@CRationalEntity@@UAEHABVCEntityEvent@@@Z */
  iVar1 = FUN_36026a70((int)(this + 0x110));
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    pcVar2 = (code *)(**(code **)(*(int *)this + 0x5c))
                               (*(undefined4 *)(*(int *)(this + 0x114) + iVar1 * 4),
                                *(undefined4 *)(param_1 + 4));
  } while ((pcVar2 == (code *)0x0) || (iVar3 = (*pcVar2)(param_1), iVar3 == 0));
  return 1;
}

