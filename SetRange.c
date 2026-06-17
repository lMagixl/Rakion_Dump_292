
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundObject::SetRange(float,float,int) */

void __thiscall CSoundObject::SetRange(CSoundObject *this,float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
                    /* 0xa2fa0  3572  ?SetRange@CSoundObject@@QAEXMMH@Z */
  fVar1 = *(float *)(this + 0x44);
  piVar3 = *(int **)(this + 0xc);
  fVar2 = *(float *)(this + 0x40);
  *(float *)(this + 0x40) = param_1;
  *(float *)(this + 0x44) = param_2;
  if ((((_DAT_362280f0 < ABS(fVar1 - param_2) + ABS(fVar2 - param_1)) &&
       (_pNetwork != (CNetworkLibrary *)0x0)) && (*(int *)(_pNetwork + 0x14) != 0)) &&
     (((piVar3 != (int *)0x0 && (iVar4 = (**(code **)(*piVar3 + 0x90))(), iVar4 != 0)) &&
      (param_3 != 0)))) {
    uVar5 = FUN_361bfd6c();
    _DAT_362ca260 = (undefined2)uVar5;
    _DAT_362ca25c = (int)this - (int)piVar3;
    uVar5 = FUN_361bfd6c();
    _DAT_362ca262 = (undefined2)uVar5;
    param_1 = 1.12104e-44;
    CEntityMessage::WriteSound
              ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(piVar3 + 7),'\x05',&DAT_362ca25c,
               (long *)&param_1);
    CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
  }
  return;
}

