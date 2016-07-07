# rainforest-cordova-plugin

Plugin to add the Rainforest iOS framework in Ionic/Cordova projects.

## Installation

First, the Rainforest iOS framework does not support iOS 7 or previous versions, so please make sure that your Cordova project is build with a deployment target >= 8.0. You can set the deployment target on the Cordova `config.xml` file:

```xml
<preference name="deployment-target" value="8.0" />
```

Next, install the node xcode utility:
```bash
npm install xcode
```

Finally, add the plugin to your Cordova project:
```bash
$ cordova plugin add https://github.com/rainforestapp/rainforest-cordova-plugin.git --save
```

## Compatibility
Tested with Cordova 6.2.0 and cordova-ios 4.1.1.

## Contributing
1. Fork it
2. Create your feature branch (git checkout -b my-new-feature)
3. Commit your changes (git commit -am 'Add some feature')
4. Push to the branch (git push origin my-new-feature)
5. Create new Pull Request
