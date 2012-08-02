## Description

This is an iOS, Objective-C alternative to `UIImagePickerController` that looks almost exactly the same, but provides the ability to select multiple images. It's as easy to setup as `UIImagePickerController` and it works in both portrait and landscape orientations. It requires the addition of **AssetsLibrary.framework**. This code uses **ARC**.

*Note: Using AssetsLibrary.framework will prompt users to allow use of their location data in order to access their photos.*

## Adding to your project

There are two ways to add `WSAssetPickerController` to your project. Either way, be sure to add the `AssetsLibrary.framework`

**Option 1:** Build and add the static library to your project:

1. Open the demo project
2. select the WSAssetPicker scheme
3. choose Product > Build for > Archiving
4. In the project navigator, right-click on `libWSAssetPicker.a` in the Products group and choose "Show in Finder"
5. Add `libWSAssetPicker.a`, `WSAssetPicker.h`, and `WSAssetPickerController` to your project
6. Make sure that `libWSAssetPicker.a` has been added to your targets Build Phases
    
**Option 2:** 
Copy all the files in the `src` directory into your project and be sure 'Copy items to destination group's folder' is checked

## Use

1. Import the header using `#import "WSAssetPicker.h"`
2. Create an instance of `WSAssetPickerController` passing a delegate of type `id <WSAssetPickerControllerDelegate>`
3. Present the `WSAssetPickerController` instance
4. Implement the delegate methods
5. You will also need to include the selection state `png` files: `WSAssetViewSelectionIndicator.png` and `WSAssetViewSelectionIndicator@2x.png` or make your own.

####Initialization and presentation
<pre>
WSAssetPickerController *controller = [[WSAssetPickerController alloc] initWithDelegate:self];
[self presentViewController:controller animated:YES completion:NULL];
</pre>

#### Delegate Methods
<pre>

- (void)assetPickerControllerDidCancel:(WSAssetPickerController *)sender
{
    // Dismiss the WSAssetPickerController.
    [self dismissViewControllerAnimated:YES completion:NULL];
}

- (void)assetPickerController:(WSAssetPickerController *)sender didFinishPickingMediaWithAssets:(NSArray *)assets
{
    // Dismiss the WSAssetPickerController.
    [self dismissViewControllerAnimated:YES completion:^{
        
        // Do something with the assets here.
        
    }];
}

</pre>