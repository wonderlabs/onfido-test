platform :ios, '11.0'
target 'SampleApp' do
 use_frameworks!
 inhibit_all_warnings!
      
    pod 'Onfido', '24.2.0'    
  end

post_install do |installer|
    installer.pods_project.targets.each do |target|
        target.build_configurations.each do |config|
            config.build_settings['EXPANDED_CODE_SIGN_IDENTITY'] = ""
            config.build_settings['CODE_SIGNING_REQUIRED'] = "NO"
            config.build_settings['CODE_SIGNING_ALLOWED'] = "NO"
            config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = 11.0
        end
    end
end
