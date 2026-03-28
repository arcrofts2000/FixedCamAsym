#pragma once

namespace Debug
{
	static void DebugPrint(const FString& msg, const FColor& colour = FColor::Red, int32 InKey = -1)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(InKey, 10.f, colour, msg);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *msg);
		}
	}
}