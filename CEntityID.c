
/* public: __thiscall CEntityID::CEntityID(class CEntity *) */

CEntityID * __thiscall CEntityID::CEntityID(CEntityID *this,CEntity *param_1)

{
  CEntity *pCVar1;
  
                    /* 0x1244c0  94  ??0CEntityID@@QAE@PAVCEntity@@@Z */
  if (param_1 == (CEntity *)0x0) {
    *(undefined4 *)this = 0xffffffff;
    return this;
  }
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x1c);
  pCVar1 = GetEntity(this);
  if (pCVar1 != (CEntity *)0x0) {
    *(int *)(pCVar1 + 0x18) = *(int *)(pCVar1 + 0x18) + 1;
  }
  return this;
}

