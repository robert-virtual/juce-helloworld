#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(toggleBtn);
    addAndMakeVisible(btnSave);
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (48.0f));
    g.setColour (juce::Colours::red);
    g.drawText ("Roberto Carlos Castillo Castellanos", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    
    // setBounds(x,y,width,height)
    toggleBtn.setBounds(10,10,30,30);
    btnSave.setBounds(10,50,100,30);
    btnSave.setButtonText("Save");
}
