
/* public: void __thiscall CAnimObject::PlayAnim(long,unsigned long) */

void __thiscall CAnimObject::PlayAnim(CAnimObject *this,long param_1,ulong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int extraout_EDX;
  int iVar9;
  float10 extraout_ST0;
  ulonglong uVar10;
  
                    /* 0x20700  2768  ?PlayAnim@CAnimObject@@QAEXJK@Z */
  if (*(int *)(this + 0x14) != 0) {
    lVar7 = GetAnimsCt(this);
    if (lVar7 <= param_1) {
      param_1 = 0;
    }
    if (((param_2 & 4) == 0) || (*(int *)(this + 8) != param_1)) {
      if ((param_2 & 8) == 0) {
        *(long *)(this + 0x10) = param_1;
        *(long *)(this + 8) = param_1;
        *(undefined4 *)(this + 4) = *(undefined4 *)(_pTimer + 0xc);
      }
      else {
        fVar1 = *(float *)(_pTimer + 0xc);
        fVar2 = *(float *)(this + 4);
        iVar6 = *(int *)(this + 8);
        iVar9 = iVar6 * 0x2c + *(int *)(extraout_EDX + 0x18);
        fVar3 = *(float *)(iVar9 + 0x20);
        uVar10 = FUN_361bfd6c();
        GetCurrentAnimLength(this);
        uVar8 = FUN_360201f0(this,(uint)uVar10);
        fVar4 = *(float *)(iVar9 + 0x20);
        fVar5 = *(float *)(_pTimer + 0xc);
        *(int *)(this + 0x10) = iVar6;
        *(long *)(this + 8) = param_1;
        *(float *)(this + 4) =
             (float)((extraout_ST0 -
                     (((float10)((fVar1 - fVar2) / fVar3) - (float10)(int)(uint)uVar10) +
                     (float10)(int)uVar8) * (float10)fVar4) + (float10)fVar5);
      }
    }
    *(ulong *)(this + 0xc) = param_2 & 3;
    CChangeable::MarkChanged((CChangeable *)this);
  }
  return;
}

