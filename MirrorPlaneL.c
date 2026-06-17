
/* public: class Plane<float,3> & __thiscall CProjection3D::MirrorPlaneL(void) */

Plane<float,3> * __thiscall CProjection3D::MirrorPlaneL(CProjection3D *this)

{
                    /* 0x3790  2647  ?MirrorPlaneL@CProjection3D@@QAEAAV?$Plane@M$02@@XZ */
  *(undefined4 *)(this + 0x7c) = 1;
  return (Plane<float,3> *)(this + 0x84);
}

