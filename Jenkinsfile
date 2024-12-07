pipeline {
	agent any

	stages {
		stage('Checkout') {
			steps {
				git url: 'https://github.com/ArtemProtsenko/SysProgKyrs_Lab4.git', credentialsId: 'credentialsId'
			}
		}
		stage('Build') {
			steps {
				script {
					bat "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\MSBuild\\Current\\Bin\\MSBuild.exe" lab4-test.sln /p:Configuration=Debug /p:Platform=x64 /m'
				}
			}
		}
		stage('Test') {
			steps {
				script {
					bat "C:\\Users\\User\\Desktop\\Univ\\SysProgKyrs\\Lab4\\lab4-test\\x64\\Debug\\lab4-test.exe"
				}
			}
		}
	}
	post {
		always {
			cleanWs()
		}
	}
}