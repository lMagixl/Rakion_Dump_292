
/* public: __thiscall CObjectPolygon::CObjectPolygon(class CObjectPolygon &) */

CObjectPolygon * __thiscall
CObjectPolygon::CObjectPolygon(CObjectPolygon *this,CObjectPolygon *param_1)

{
  int iVar1;
  CObjectPolygon *pCVar2;
  CObjectPolygon *pCVar3;
  
                    /* 0x4b730  178  ??0CObjectPolygon@@QAE@AAV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  pCVar2 = param_1 + 8;
  pCVar3 = this + 8;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  FUN_3604b580(this + 0x4c,param_1 + 0x4c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  pCVar2 = param_1 + 100;
  pCVar3 = this + 100;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  return this;
}

