Pod::Spec.new do |spec|
    spec.name         = 'PartnerBoost'
    spec.version      = '1.0'
    spec.summary      = 'This a SDK for PartnerBoost Business Members'
    spec.homepage     = 'https://github.com/partnerboost-tech-team/PBLink'
    spec.license      = 'MIT'
    spec.authors      = {'Jeff' => 'fujie@55haitao.com'}
    spec.platform     = :ios
    spec.source       = { :git => "https://github.com/partnerboost-tech-team/PBLink.git", :tag => "v#{spec.version}" }
    # spec.requires_arc = true
    spec.vendored_frameworks = "PartnerBoost.framework"
    spec.dependency     'JCore'
    spec.dependency     'JMLink'
end
