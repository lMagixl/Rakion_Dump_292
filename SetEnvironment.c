
/* public: void __thiscall CSoundLibrary::SetEnvironment(enum SndEnvFX) */

void __thiscall CSoundLibrary::SetEnvironment(CSoundLibrary *this,SndEnvFX param_1)

{
                    /* 0x9ea80  3451  ?SetEnvironment@CSoundLibrary@@QAEXW4SndEnvFX@@@Z */
  if (((int)param_1 < 0) || (0x10 < (int)param_1)) {
    param_1 = 1;
  }
  if (DAT_362a5210 == 0) {
    param_1 = 0;
  }
  if ((DAT_362a5220 != param_1) && (DAT_362a5220 = param_1, ((byte)this[0x44] & 4) != 0)) {
    param_1 = (&DAT_362a51a8)[param_1];
    (**(code **)(**(int **)(this + 0x28) + 0x10))
              (*(int **)(this + 0x28),&DAT_3622fd40,0x8000000b,0,0,&param_1,4);
  }
  return;
}

