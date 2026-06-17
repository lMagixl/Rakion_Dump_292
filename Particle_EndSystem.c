
/* void __cdecl Particle_EndSystem(int) */

void __cdecl Particle_EndSystem(int param_1)

{
                    /* 0x6b870  2743  ?Particle_EndSystem@@YAXH@Z */
  if (param_1 != 0) {
    CDrawPort::SetOrtho(DAT_362bf984);
  }
                    /* WARNING: Could not recover jumptable at 0x3606b883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_362c4614)();
  return;
}

