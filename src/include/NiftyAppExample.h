#pragma once

#include <NiftyApp.h>
#include <NiftyScallop.h>
#include <NiftyCalc.h>
#include <NiftyNum.h>

class NiftyApp : public Nifty::App
{
public:
	NiftyApp();
	~NiftyApp();

private:
	virtual void BeginFrame() override {};
	virtual void Update() override;
	virtual void EndFrame() override {};
};