
/* public: void __thiscall CSoundLibrary::Mute(float) */

void __thiscall CSoundLibrary::Mute(CSoundLibrary *this,float param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  undefined4 uStack_4;
  
                    /* 0x9f210  2661  ?Mute@CSoundLibrary@@QAEXM@Z */
  IFeel_StopEffect((char *)0x0);
  if (this != (CSoundLibrary *)0x0) {
    CTimer::GetHighPrecisionTimer(_pTimer);
    *(double *)(this + 0x468) =
         (double)CONCAT44(uStack_4,local_8) / (double)*(longlong *)_pTimer + (double)param_1;
    if ((*(uint *)(this + 0x44) & 1) == 0) {
      if ((*(uint *)(this + 0x44) & 2) != 0) {
        for (piVar3 = *(int **)(this + 0x458); *piVar3 != 0; piVar3 = (int *)*piVar3) {
          if (-1 < piVar3[10]) {
            ReleasePlayingBuffer(this,piVar3[10],1);
            piVar3[10] = -1;
          }
        }
      }
      if ((*(IDirectSoundBuffer **)(this + 0x30) != (IDirectSoundBuffer *)0x0) &&
         (iVar1 = DSLockBuffer(this,*(IDirectSoundBuffer **)(this + 0x30),*(long *)(this + 0x68),
                               &local_8,(ulong *)&param_1), iVar1 != 0)) {
        puVar4 = local_8;
        for (uVar2 = (uint)param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar2 = (uint)param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        (**(code **)(**(int **)(this + 0x30) + 0x4c))(*(int **)(this + 0x30),local_8,param_1,0,0);
      }
    }
  }
  return;
}

