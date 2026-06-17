
/* private: void __thiscall CSoundLibrary::DSPlayMainBuffers(void) */

void __thiscall CSoundLibrary::DSPlayMainBuffers(CSoundLibrary *this)

{
  int iVar1;
  uint uVar2;
  byte unaff_SI;
  undefined4 *puVar3;
  undefined1 *puStack_24;
  int *piStack_20;
  undefined4 *puStack_1c;
  undefined4 local_c [3];
  
                    /* 0x9e910  1446  ?DSPlayMainBuffers@CSoundLibrary@@AAEXXZ */
  piStack_20 = *(int **)(this + 0x30);
  puStack_1c = local_c;
  puStack_24 = (undefined1 *)0x3609e928;
  (**(code **)(*piStack_20 + 0x24))();
  puStack_24 = &stack0xffffffec;
  (**(code **)(**(int **)(this + 0x24) + 0x24))(*(int **)(this + 0x24));
  if ((((uint)puStack_1c & 1) == 0) || ((unaff_SI & 1) == 0)) {
    (**(code **)(**(int **)(this + 0x30) + 0x48))(*(int **)(this + 0x30));
    do {
      (**(code **)(**(int **)(this + 0x30) + 0x24))(*(int **)(this + 0x30),&piStack_20);
    } while (((uint)piStack_20 & 1) != 0);
    (**(code **)(**(int **)(this + 0x24) + 0x48))(*(int **)(this + 0x24));
    do {
      (**(code **)(**(int **)(this + 0x24) + 0x24))(*(int **)(this + 0x24),&puStack_24);
    } while (((uint)puStack_24 & 1) != 0);
    iVar1 = DSLockBuffer(this,*(IDirectSoundBuffer **)(this + 0x30),*(long *)(this + 0x68),
                         &puStack_1c,(ulong *)&piStack_20);
    if (iVar1 != 0) {
      puVar3 = puStack_1c;
      for (uVar2 = (uint)piStack_20 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = (uint)piStack_20 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      (**(code **)(**(int **)(this + 0x30) + 0x4c))
                (*(int **)(this + 0x30),puStack_1c,piStack_20,0,0);
      (**(code **)(**(int **)(this + 0x24) + 0x30))(*(int **)(this + 0x24),0,0,1);
      (**(code **)(**(int **)(this + 0x30) + 0x30))(*(int **)(this + 0x30),0,0,1);
      DAT_362ca0dc = 0;
    }
  }
  return;
}

