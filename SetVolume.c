
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundObject::SetVolume(float,int) */

void __thiscall CSoundObject::SetVolume(CSoundObject *this,float param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  
                    /* 0xa2ed0  3624  ?SetVolume@CSoundObject@@QAEXMH@Z */
  fVar3 = _DAT_36223384;
  if (param_1 < _DAT_36223384 != (param_1 == _DAT_36223384)) {
    fVar3 = param_1;
  }
  fVar1 = *(float *)(this + 0x38);
  piVar2 = *(int **)(this + 0xc);
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(float *)(this + 0x38) = fVar3;
  if ((((_DAT_362280f0 < ABS(fVar1 - fVar3)) && (_pNetwork != (CNetworkLibrary *)0x0)) &&
      (*(int *)(_pNetwork + 0x14) != 0)) &&
     (((piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 0x90))(), iVar4 != 0)) &&
      (param_2 != 0)))) {
    uVar5 = FUN_361bfd6c();
    _DAT_362ca25c = (int)this - (int)piVar2;
    DAT_362ca260 = (undefined1)uVar5;
    param_1 = 7.00649e-45;
    CEntityMessage::WriteSound
              ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(piVar2 + 7),'\x03',&DAT_362ca25c,
               (long *)&param_1);
    CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
  }
  return;
}

