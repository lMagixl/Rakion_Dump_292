
/* public: void __thiscall CEntityComponent::AddToCRCTable(void) */

void __thiscall CEntityComponent::AddToCRCTable(CEntityComponent *this)

{
                    /* 0x132850  1028  ?AddToCRCTable@CEntityComponent@@QAEXXZ */
  if (*(int *)(this + 0x14) != 0) {
    switch(*(undefined4 *)this) {
    case 1:
                    /* WARNING: Could not recover jumptable at 0x3613286b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(this + 0x14) + 0x1c))();
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x36132873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(this + 0x14) + 0x1c))();
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x36132883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(this + 0x14) + 0x1c))();
      return;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x3613287b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(this + 0x14) + 0x1c))();
      return;
    }
  }
  return;
}

