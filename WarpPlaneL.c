
/* public: class Plane<float,3> & __thiscall CProjection3D::WarpPlaneL(void) */

Plane<float,3> * __thiscall CProjection3D::WarpPlaneL(CProjection3D *this)

{
                    /* 0x37c0  3946  ?WarpPlaneL@CProjection3D@@QAEAAV?$Plane@M$02@@XZ */
  *(undefined4 *)(this + 0x80) = 1;
  return (Plane<float,3> *)(this + 0x84);
}

