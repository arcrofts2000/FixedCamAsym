// DBD Inspired Fixed Cam game - Adam Crofts


#include "Character/DBDBaseCharacter.h"

ADBDBaseCharacter::ADBDBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

}
