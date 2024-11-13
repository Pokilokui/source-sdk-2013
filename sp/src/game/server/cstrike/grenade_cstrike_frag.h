//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//

#ifndef GRENADE_CSTRIKE_FRAG_H
#define GRENADE_CSTRIKE_FRAG_H
#pragma once

class CBaseGrenade;
struct edict_t;

CBaseGrenade* CstrikeFraggrenade_Create(const Vector& position, const QAngle& angles, const Vector& velocity, const AngularImpulse& angVelocity, CBaseEntity* pOwner, float timer, bool combineSpawned);
bool	CstrikeFraggrenade_WasPunted(const CBaseEntity* pEntity);
bool	CstrikeFraggrenade_WasCreatedByCombine(const CBaseEntity* pEntity);

#endif // GRENADE_FRAG_H
