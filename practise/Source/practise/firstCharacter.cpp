// Fill out your copyright notice in the Description page of Project Settings.


#include "firstCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AfirstCharacter::AfirstCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	ArmComp = CreateDefaultSubobject<USpringArmComponent>("Armcomp");//�������Ϊ����������
	//��������ģ�����͵�����
	ArmComp->SetupAttachment(RootComponent);//RootComponentλ���൱�ڽ���������
	Cameracomp = CreateDefaultSubobject<UCameraComponent>("Cameracomp");
	Cameracomp->SetupAttachment(ArmComp);

}

// Called when the game starts or when spawned
void AfirstCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AfirstCharacter::Moveforward(float value)
{
	AddMovementInput(GetActorForwardVector()/*����ָ��������Եķ�������� */, value);
}

void AfirstCharacter::Moveright(float value)
{
	AddMovementInput(GetActorRightVector(), value);
}

// Called every frame
void AfirstCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AfirstCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Moveforward",this,&AfirstCharacter::Moveforward);//Ȼ����UE��Ŀ����->Input �����Axisӳ�䣬������Moveforwardͬ��,�����ִ�Сд
	PlayerInputComponent->BindAxis("Moveright", this, &AfirstCharacter::Moveright);

	PlayerInputComponent->BindAxis("Turn",this,&APawn::AddControllerYawInput);//YawΪˮƽ��ת��pitchΪ��ֱ��ת

	PlayerInputComponent->BindAxis("TurnPitch", this, &APawn::AddControllerPitchInput);
}

