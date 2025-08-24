#pragma once

#include <core/app.h>

class NiftyApp : public nft::App
{
public:
	NiftyApp();
	~NiftyApp();

private:
	virtual void PreInit() override;
	virtual void PostInit() override;
	virtual void BeginFrame() override {};
	virtual void Update() override;
	virtual void EndFrame() override {};
};